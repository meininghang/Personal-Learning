# -*- coding: utf-8 -*-
# 1.1 Case Study
# For this Assignment you will be designing and developing a Database for a fantasy base building game. One example of such a game is Townsmen. For this Assignment you do not need to worry about implementing the game at all, we are just focusing on the database.
# The game is multiplayer with multiple players. Each player has a base, in which they can construct various buildings. These buildings produce resources which can be used to construct other buildings or can be sold for currency. As this is designed to be an online game the construction of a building can take several hours or days in real time.
# You will be given an initial ERD (Entity Relationship Diagram) as well as a .zip file containing test data stored as .csv (comma-separated format) files. From this information, and following the Tasks below, you will expand the database design, populate the database with test data, test the data, and answer questions in an online quiz for your final mark.

import psycopg2
import pandas as pd
# 获得连接
# 2.1 Task 1 - Setup the database
# 1. Download the test-data.zip from Canvas and extract the csv files in it.
# 2. Create a new file named assignment3.sql. In this file you will save all the sql code that you write.
# 3. Create a new postgres user named fsad. (Note: If you are using the lab machines, the username and database that has already been created for you is fine to use).
# 4. Create a new database named assignment3 <studentId> (where studentId is your email prefix, e.g. the abc123 part of abc123@student.bham.ac.uk).
# 5. Make sure the fsad user has full privileges on the assignment3 database.
conn = psycopg2.connect(database="backup", user="postgres", password="    ", host="127.0.0.1", port="5432")
# 获得游标对象
cursor = conn.cursor()
# sql语句
# sql = "SELECT VERSION()"
sql = """SELECT * FROM player 
        ORDER BY player_name 
        ASC """
# 执行语句
cursor.execute(sql)
# 获取单条数据.
# data = cursor.fetchone()
# data = cursor.fetchmany(30)
data = cursor.fetchall()
# 打印
# print("database version : %s " % data)
print(data)
print("=========================")

# Task 4 - Create Views
# Create a view for each building named <building info> that displays the following columns: Name, Description, Resources Generated, Required Gold, Build Time.
sql2 = """CREATE OR REPLACE VIEW public.building_info
 AS
 SELECT building.building_name AS name,
    building.building_description AS description,
    resource.resource_name AS resources_generated,
    resource.resource_name='Gold' AS required_gold,
    buildingcost.build_time
   FROM building,
    resource,
    buildingcost
  WHERE building.building_id = buildingcost.building_id
  and building.resource_generated = resource.resource_id;"""
cursor.execute(sql2)
data2 = cursor.query.decode('utf-8')
print(data2)
print("=========================")
# Create a view for each Player named <player name>buildings that displays all the buildings (by name) the player has built in their base.
# sql3 = 
# cursor.execute(sql3)
# data3 = cursor.fetchall()
# print(data3)
# print("=========================")
# 事物提交
conn.commit()
# 关闭数据库连接
conn.close()
