sham:
	        shc -f sham.sh
	        mv sham.sh.x sham 
clean:
	        rm sham
install:
	        mkdir -p $(DESTDIR)/usr/bin
	        install -m 0755 sham $(DESTDIR)/usr/bin/sham
