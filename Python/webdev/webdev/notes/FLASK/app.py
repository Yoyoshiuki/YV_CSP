from flask import Flask, request, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('name.html', title='Home page', content='This is my home page.')

@app.route('/<name>')
def user(name):
  return render_template('name.html', title=f'This is {name}\'s page', content=f'This is the page for {name}.')

@app.route('/test')
def testing():
    return render_template('name.html', title='Test page', content='This is a test page.')

"""@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        name = request.form['username']
        return f'Hello, {name}!'
    return render_template('Python\webdev\webdev\notes\FLASK\name.html')
"""

if __name__ == '__main__':
    app.run()