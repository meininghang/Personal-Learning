import tensorflow as tf
import matplotlib.pyplot as plt 
import ssl 
ssl._create_default_https_context = ssl._create_unverified_context

# print(tf.__version__)

mnist = tf.keras.datasets.fashion_mnist
(training_images, training_labels), (test_images,test_labels) = mnist.load_data()
#plt.imshow(training_images[0])
#print(training_labels[0])
#print(training_images[0])

#normalization
training_images = training_images / 255.0
test_images = test_images / 255.0

# 3 layers nn model
model = tf.keras.models.Sequential([tf.keras.layers.Flatten(),
                                                                    tf.keras.layers.Dense(128, activation=tf.nn.relu),
                                                                    tf.keras.layers.Dense(10, activation=tf.nn.softmax)])

#compile&fit nn model
model.compile(optimizer = 'adam',
                            loss = 'sparse_categorical_crossentropy',
                            metrics=['accuracy'])
model.fit(training_images, training_labels, epochs=5)

# test the model
model.evaluate(test_images, test_labels)