# ShAm

![S h A m](https://github.com/NEOLabs-software/ShAm/assets/101670923/f81c2e1a-e67f-4aa9-85a0-4282599efd59)

a shell script compiler for linux that converts shell into cpp and then compiles that code

it can get janky but it still compiles it

# ways to install
the ways to install are

* deb package

* ppa package(not tested)

* aur package

* source code

# debian package

download the package and cd into the download directory

```
cd Downloads
```

and install it

```
sudo dpkg -i sham*.deb
```

# ppa

run the command
```
sudo add-apt-repository ppa:thayeeboi890/sham
```

and install it

```
sudo apt-get update ; sudp apt-get install sham
```

# aur

git clone the aur and cd into it

```
git clone https://aur.archlinux.org/sham.git ; cd sham
```

compile the aur package

```
makepkg -si
```


after it finishes, you will now have sham installed in your system

# sourcecode

clone the repository

```
git clone https://github.com/thayeeboi890/sham.git
```

cd into the directory

```
cd sham
```

compile it

```
meson build
ninja -C build
```

and install it

```
sudo ninja -C build install
```
### credits

**created by NEOLabs-software**

![neolabs](https://github.com/NEOLabs-software/example-form-html/assets/101670923/7acb51d9-c48f-470a-9473-981358fb4865)
