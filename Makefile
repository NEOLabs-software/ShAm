sham:
	        shc -f sham.sh
	        mv sham.sh.x sham 
clean:
	        rm sham
install:
	        mkdir -p $(DESTDIR)/usr/bin
		mkdir -p $(DESTDIR)/usr/local/bin
		rm /usr/bin/sham
		rm /usr/local/bin/sham
	        install -m 0755 sham $(DESTDIR)/usr/bin/sham
		install -m 0755 sham $(DESTDIR)/usr/local/bin/sham
