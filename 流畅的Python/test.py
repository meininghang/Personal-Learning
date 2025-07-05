import requests
from bs4 import BeautifulSoup

url = "https://baijiahao.baidu.com/s?id=1830064276188136180&wfr=spider&for=pc"

headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/114.0.0.0 Safari/537.36"
}

response = requests.get(url, headers=headers)
response.raise_for_status()
soup = BeautifulSoup(response.text, "html.parser")

# 获取标题
title = soup.find("h1")
title_text = title.get_text(strip=True) if title else "无标题"

# 获取正文内容
content_div = soup.find("div", class_="article-content")
if not content_div:
    content_div = soup.find("div", class_="article")  # 兼容其它结构

# 提取正文文本和图片
content_html = ""
if content_div:
    # 保留图片和段落
    for elem in content_div.find_all(['p', 'img']):
        if elem.name == 'p':
            content_html += f"<p>{elem.get_text(strip=True)}</p>\n"
        elif elem.name == 'img':
            img_url = elem.get('src') or elem.get('data-src')
            if img_url:
                content_html += f'<img src="{img_url}" style="max-width:600px;"><br/>\n'
else:
    content_html = "<p>未能抓取到正文内容</p>"

# 生成静态 HTML
html_template = f"""
<!DOCTYPE html>
<html lang="zh">
<head>
    <meta charset="UTF-8">
    <title>{title_text}</title>
</head>
<body>
    <h1>{title_text}</h1>
    {content_html}
</body>
</html>
"""

# 保存为本地文件
with open("news.html", "w", encoding="utf-8") as f:
    f.write(html_template)

print("新闻页面已生成：news.html")
