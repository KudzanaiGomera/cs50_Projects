# Document Object Model(DOM)

- is a tree like structure of a web page

                                html
                                /   \
                            head      body
                             |          |
                           title     Hello World
                             |
                           Hello


## CSS Specificity: 

- so basically when styling a web page the specificity defines how powerful your styling will be

1. inline

2. id

3. class

4. Type

# Responsive Object

1. viewport - > visual part of a screen <meta name="viewport" content="width=device-width, initial-scale=1.0"> 

2. Media Queries -> control what a page look like depending on how we are loading a website on a particular device

3. Flexbox -> 

4. Grids ->


## SASS(SCSS)

- inorder for css to support variables we use scss to make it more powerful
- browsers are not ableto understand sass so we need to compile it to css so that they can understand it

1. install a program called sass

- npm install -g sass (all OS)

2. compile scss to css

- sass variabe.scss:variable.css

3. !important to automate the recompile stuff

- sass --watch variable.scss:variable.css