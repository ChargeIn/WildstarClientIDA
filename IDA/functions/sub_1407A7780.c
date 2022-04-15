//----- (00000001407A7780) ----------------------------------------------------
__int64 __fastcall sub_1407A7780(__int64 a1, HWND a2)
{
	_QWORD* v3; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rax
	__int64 v7; // rcx
	int v8; // ecx
	_QWORD* v9; // rax
	int v10; // ecx
	_QWORD* v11; // rax
	int SystemMetrics; // eax
	HWND ForegroundWindow; // rax
	int v14; // eax
	unsigned int v15; // ecx
	_DWORD* v16; // rax
	unsigned int v17; // ecx
	_DWORD* v18; // rax
	RAWINPUTDEVICE pRawInputDevices; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)a1 = off_140B78580;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	v3 = (_QWORD*)(a1 + 160);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v5 = 1024i64;
	do
	{
		*v3 = 0i64;
		v3[1] = 0i64;
		v3[2] = 0i64;
		v3 += 8;
		*(v3 - 5) = 0i64;
		*(v3 - 4) = 0i64;
		*(v3 - 3) = 0i64;
		*(v3 - 2) = 0i64;
		*(v3 - 1) = 0i64;
		--v5;
	} while (v5);
	v6 = (_QWORD*)(a1 + 65696);
	v7 = 14i64;
	do
	{
		*v6 = 0i64;
		v6[1] = 0i64;
		v6[2] = 0i64;
		v6 += 8;
		*(v6 - 5) = 0i64;
		*(v6 - 4) = 0i64;
		*(v6 - 3) = 0i64;
		*(v6 - 2) = 0i64;
		*(v6 - 1) = 0i64;
		--v7;
	} while (v7);
	v8 = 4095;
	v9 = (_QWORD*)(a1 + 66672);
	do
	{
		--v8;
		*(v9 - 3) = 0i64;
		*(v9 - 2) = 0i64;
		*(v9 - 1) = 0i64;
		*v9 = 0i64;
		v9 += 11;
	} while (v8 >= 0);
	v10 = 55;
	v11 = (_QWORD*)(a1 + 427120);
	do
	{
		--v10;
		*(v11 - 3) = 0i64;
		*(v11 - 2) = 0i64;
		*(v11 - 1) = 0i64;
		*v11 = 0i64;
		v11 += 11;
	} while (v10 >= 0);
	*(_QWORD*)(a1 + 436120) = 0i64;
	*(_QWORD*)(a1 + 436128) = 0i64;
	*(_QWORD*)(a1 + 436152) = 0i64;
	*(_QWORD*)(a1 + 436144) = 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 436160) = qword_140C77760;
	*(_QWORD*)(a1 + 436168) = qword_140C77760;
	*(_QWORD*)(a1 + 436176) = qword_140C77760;
	*(_QWORD*)(a1 + 436184) = qword_140C77760;
	*(_OWORD*)(a1 + 436192) = 0i64;
	*(_DWORD*)(a1 + 436340) = 0;
	SystemMetrics = GetSystemMetrics(4096);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 436344) = SystemMetrics;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 80) = 400;
	*(_DWORD*)(a1 + 84) = 300;
	ForegroundWindow = GetForegroundWindow();
	*(_DWORD*)(a1 + 96) = 0;
	*(_DWORD*)(a1 + 100) = 7;
	*(_DWORD*)(a1 + 436136) = 0;
	*(_DWORD*)(a1 + 88) = ForegroundWindow == a2;
	v14 = sub_14018CDF0();
	*(_DWORD*)(a1 + 92) = 0;
	*(_DWORD*)(a1 + 436348) = v14;
	*(_DWORD*)(a1 + 436352) = v14;
	sub_1407E4830((int*)(a1 + 431968), 0i64, 0x800ui64);
	*(_QWORD*)(a1 + 434016) = 0i64;
	*(_QWORD*)(a1 + 434024) = 0i64;
	*(_QWORD*)(a1 + 434032) = 0i64;
	*(_DWORD*)(a1 + 434040) = 0;
	sub_1407E4830((int*)(a1 + 66592), 0i64, 0x58000ui64);
	sub_1407E4830((int*)(a1 + 427040), 0i64, 0x1340ui64);
	sub_1407E4830((int*)(a1 + 436208), 0i64, 0x70ui64);
	v15 = 0;
	v16 = (_DWORD*)(a1 + 66596);
	do
	{
		v16[1] = v15;
		v16[23] = v15;
		v16[45] = v15;
		v16[67] = v15;
		v16[89] = v15;
		v16[111] = v15;
		v16[133] = v15;
		v16[155] = v15++;
		*(_QWORD*)(v16 - 1) = 1i64;
		v16[21] = 1;
		v16[22] = 1;
		v16[43] = 1;
		v16[44] = 2;
		v16[65] = 1;
		v16[66] = 3;
		v16[87] = 1;
		v16[88] = 4;
		v16[109] = 1;
		v16[110] = 5;
		v16[131] = 1;
		v16[132] = 6;
		v16[153] = 1;
		v16[154] = 7;
		v16 += 176;
	} while (v15 < 0x200);
	v17 = 0;
	v18 = (_DWORD*)(a1 + 427044);
	do
	{
		v18[1] = v17;
		v18[23] = v17;
		v18[45] = v17;
		v18[67] = v17;
		v18[89] = v17;
		v18[111] = v17;
		v18[133] = v17;
		v18[155] = v17++;
		*(_QWORD*)(v18 - 1) = 2i64;
		v18[21] = 2;
		v18[22] = 1;
		v18[43] = 2;
		v18[44] = 2;
		v18[65] = 2;
		v18[66] = 3;
		v18[87] = 2;
		v18[88] = 4;
		v18[109] = 2;
		v18[110] = 5;
		v18[131] = 2;
		v18[132] = 6;
		v18[153] = 2;
		v18[154] = 7;
		v18 += 176;
	} while (v17 < 7);
	sub_1407E4830((int*)(a1 + 436360), 1i64, 0x37Cui64);
	*(_QWORD*)&pRawInputDevices.usUsagePage = 131073i64;
	pRawInputDevices.hwndTarget = a2;
	RegisterRawInputDevices(&pRawInputDevices, 1u, 0x10u);
	return a1;
}
// 140B78580: using guessed type __int64 (__fastcall *off_140B78580[30])();
// 140C77760: using guessed type __int64 qword_140C77760;

