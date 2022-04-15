//----- (00000001408879C0) ----------------------------------------------------
_QWORD* __fastcall sub_1408879C0(__int64 a1, _DWORD* a2, int a3, __int64 a4, unsigned int* a5, _QWORD* a6)
{
	_QWORD* v8; // rsi
	__int64 v11; // rax
	_QWORD* v12; // rdi
	_QWORD* result; // rax
	int v14; // ebx

	v8 = 0i64;
	*a6 = 0i64;
	v11 = sub_1408819F0(dword_140C111C0, 224i64);
	v12 = (_QWORD*)v11;
	if (!v11)
	{
		sub_140883340(a1, *(_BYTE*)(a4 + 13));
		v11 = sub_1408819F0(dword_140C111C0, 224i64);
		v12 = (_QWORD*)v11;
		if (!v11)
		{
		LABEL_9:
			result = 0i64;
			goto LABEL_10;
		}
	}
	sub_1408835E0(v11);
	v12[25] = 0i64;
	v12[26] = 0i64;
	v12[27] = 0i64;
	*v12 = off_1409A80C0;
	v12[15] = off_1409A8030;
	if ((unsigned int)sub_140884B70((__int64)v12, a1, a2, a3, a4, a5, *(_DWORD*)(a1 + 264)) != 1)
	{
		if (v12)
		{
			v14 = dword_140C111C0;
			(*(void(__fastcall**)(_QWORD*, _QWORD)) * v12)(v12, 0i64);
			sub_140881720(v14, (__int64)v12);
		}
		goto LABEL_9;
	}
	sub_140883CD0(a1, (__int64)v12);
	if (v12)
		v8 = v12 + 15;
	result = v12;
LABEL_10:
	*a6 = v8;
	return result;
}
// 1409A8030: using guessed type __int64 (__fastcall *off_1409A8030[17])();
// 1409A80C0: using guessed type __int64 (__fastcall *off_1409A80C0[14])();
// 140C111C0: using guessed type int dword_140C111C0;

