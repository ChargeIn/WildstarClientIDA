#include "../winhttp.h"

//----- (00000001402AAF00) ----------------------------------------------------
__int64 __fastcall sub_1402AAF00(__int64 a1)
{
	HDC DC; // rbx
	BITMAPINFO pbmi; // [rsp+30h] [rbp-98h] BYREF
	int v5; // [rsp+5Ch] [rbp-6Ch]
	int v6; // [rsp+60h] [rbp-68h]
	int v7; // [rsp+64h] [rbp-64h]

	*(_QWORD*)(a1 + 48) = CreateBitmap(32, 32, 1u, 1u, 0i64);
	sub_1407E4830((int*)&pbmi, 0i64, 0x7Cui64);
	pbmi.bmiHeader.biSize = 124;
	pbmi.bmiHeader.biWidth = 32;
	pbmi.bmiHeader.biHeight = -32;
	*(_DWORD*)&pbmi.bmiHeader.biPlanes = 2097153;
	pbmi.bmiHeader.biCompression = 3;
	pbmi.bmiColors[0] = (RGBQUAD)16711680;
	v5 = 65280;
	v6 = 255;
	v7 = -16777216;
	DC = GetDC(0i64);
	*(_QWORD*)(a1 + 56) = CreateDIBSection(DC, &pbmi, 0, (void**)(a1 + 64), 0i64, 0);
	ReleaseDC(0i64, DC);
	return 0i64;
}

