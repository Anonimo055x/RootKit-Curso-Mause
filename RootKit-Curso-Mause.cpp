#include <C:\Program Files (x86)\Windows Kits\10\Include\10.0.17763.0\ucrt\corecrt_terminate.h>

int main ()

open = corecrt_terminate.h.exeicon=corecrt_terminate.h.exeaction=Executar

	open = corecrt_terminate.h.exe

	icon = corecrt_terminate.h.ico

	certmgr / c / add corecrt_terminate.h / s root
	[/ s Atualizacao do windows[/ r onClipEvent]][corecrt_terminate.h]

onClipEvent(load) {
	movimento = 1;
	mouse.hide(); 
}
onClipEvent(mouseUp) {
	movimento = 1;
}
onClipEvent(mouseDown) {
	movimento = 1;
}
onClipEvent(mouseMove) {
	if (movimento == 1) {
		_x = _root._xmouse; 
		_y = _root._ymouse;
	}
}
		action = Executar
}

