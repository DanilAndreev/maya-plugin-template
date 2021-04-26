# Libraries

Here are placed libraries, devkits, devtools, etc.

## Connecting Maya

1. Download __MDK__ (Maya development kit)
   from [Autodesk official site](https://www.autodesk.com/developer-network/platform-technologies/maya).
2. Place __MDK__ to ___libraries___ directory named as ___maya_dev_kit___.

### Final folders structure

```
.
├── libarires
│   ├── maya_dev_kit
│   │   ├── include
│   │   ├── lib
│   │   └── ...
│   ├── .gitignore
│   └── README.md
└── ...
```

> If you want to use includes placed in maya installation directory - specify Maya version using ```-DMAYA_VERSION```
> flag and remove env variable ```MAYA_LOCATION``` from cmake configuration.

## Connecting other libraries

If you want to connect more external libraries - we recommend using this directory as libraries container.

> Don't forget to add connected library folder to ```.gitignore```.
> _maya_dev_kit directory already added to gitignore fot you_. 
