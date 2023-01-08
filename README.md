# sham
a shell script compiler for linux
# ways to install
the ways to install are

-deb package

-rpm package

-appimage installer

-source-code

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

install nessesary apps

```
chmod +x installcommands.sh && sudo ./installcommands.sh
```

compile it

```
make
```

and install it

```
sudo make install
```
