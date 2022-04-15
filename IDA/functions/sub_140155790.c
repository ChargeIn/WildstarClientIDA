#include "../winhttp.h"

//----- (0000000140155790) ----------------------------------------------------
LONG __fastcall sub_140155790(__int64 a1)
{
	HIMC Context; // r14
	unsigned __int64 v3; // rbx
	__int64 v4; // rdx
	__int64 v5; // r8
	__int64 v6; // r9
	unsigned __int64 v7; // rcx
	__int64 v8; // rax
	int* v9; // rcx
	int* v10; // rbp
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // rbx
	LONG result; // eax
	int Buf[128]; // [rsp+20h] [rbp-228h] BYREF

	Context = ImmGetContext(*(HWND*)a1);
	v3 = (unsigned __int64)ImmGetCompositionStringW(Context, 8u, Buf, 0x100u) >> 1;
	ImmReleaseContext(*(HWND*)a1, Context);
	v7 = 2i64 * (int)v3;
	if (v7 >= 0x200)
	{
		_report_rangecheckfailure(v7, v4, v5, v6);
		JUMPOUT(0x1401558ECi64);
	}
	v8 = 0i64;
	*((_WORD*)Buf + (int)v3) = 0;
	if (LOWORD(Buf[0]))
	{
		do
			++v8;
		while (*((_WORD*)Buf + v8));
	}
	v9 = *(int**)(a1 + 104);
	v10 = (int*)((char*)Buf + 2 * v8);
	v11 = (__int64)(*(_QWORD*)(a1 + 112) - (_QWORD)v9) >> 1;
	v12 = (2 * v8) >> 1;
	if (v12 > v11)
	{
		sub_1407DB590(v9, Buf, 2 * v11);
		sub_14001C310(
			(_QWORD*)(a1 + 96),
			(int*)((char*)Buf + 2 * ((__int64)(*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)) >> 1)),
			v10);
	}
	else
	{
		v13 = 2 * v12;
		sub_1407DB590(v9, Buf, v13);
		sub_14001C2B0(a1 + 96, (int*)(v13 + *(_QWORD*)(a1 + 104)), *(int**)(a1 + 112));
	}
	result = ImmGetCompositionStringW(Context, 0x80u, 0i64, 0);
	*(_DWORD*)(a1 + 60) = result;
	return result;
}
// 1401558E7: control flows out of bounds to 1401558EC
// 1401558E7: variable 'v4' is possibly undefined
// 1401558E7: variable 'v5' is possibly undefined
// 1401558E7: variable 'v6' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);

