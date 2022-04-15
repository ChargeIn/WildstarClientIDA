//----- (00000001404D3DA0) ----------------------------------------------------
__int64 __fastcall sub_1404D3DA0(__int64 a1, unsigned int a2)
{
	int* v4; // rax
	int* v5; // rbx

	*(_DWORD*)(a1 + 8) = a2;
	if (a2 && a2 - 1 > 5)
		return 2147500037i64;
	v4 = sub_14018B280(48i64, 0);
	v5 = v4;
	if (!v4)
		return 2147500037i64;
	v4[2] = 10;
	*((_QWORD*)v4 + 2) = 0i64;
	*((_QWORD*)v4 + 3) = 0i64;
	*(_QWORD*)v4 = off_140B690C0;
	*((_QWORD*)v4 + 4) = 0i64;
	*((_QWORD*)v4 + 5) = 0i64;
	(**(void(__fastcall***)(int*, _QWORD))v4)(v4, a2);
	*(_QWORD*)(a1 + 16) = v5;
	return 0i64;
}
// 1404D3DFB: conditional instruction was optimized away because rax.8!=0
// 140B690C0: using guessed type __int64 (__fastcall *off_140B690C0[3])();

