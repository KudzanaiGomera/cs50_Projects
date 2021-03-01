from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def index(request):
    return render(request, 'projectx/index.html')

def greet(request, name):
    return render(request, 'projectx/greet.html',{
        "name": name.capitalize()
    })