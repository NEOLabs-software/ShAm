# ShAm


a shell script compiler for linux
# ways to install
the ways to install are

* deb package

* rpm package

* aur package

* source code

# debian package

download the package and cd into the download directory

```
cd Downloads
```

and install it

```
sudo dpkg -i sham.deb
```

# rpm package

download the rpm package and cd into the cirectory

```
cd Downloads
```

and install it

```
sudo rpm -i sham-1.0.1-1.x86_64.rpm
```

# appimage installer

download the file and cd into the dicectory

```
cd Downloads
```

make the appimage executable

```
chmod +x installsham.appimage
```

and now execute it

```
./installsham.appimage
```

it will guide you trhough some steps

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
