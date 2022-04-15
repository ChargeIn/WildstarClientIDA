//----- (000000014049F8C0) ----------------------------------------------------
__int64 __fastcall sub_14049F8C0(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
	int v7; // eax
	int v8; // eax
	unsigned int v9; // ebx
	_DWORD* v10; // rax
	__int64 v11; // r10
	unsigned int v12; // r11d
	int v13; // edi

	if (!qword_140C65C28)
		return 0i64;
	v7 = *(_DWORD*)(a2 + 128);
	if ((v7 == 20 || v7 == 23) && (!a5 || (v8 = *(_DWORD*)(a5 + 128), v8 == 20) || v8 == 23))
	{
		if (a3 == 2)
			return 1i64;
	}
	else
	{
		v9 = 0;
		v10 = (_DWORD*)sub_140643EA0(qword_140C65C28, a4);
		if (v10)
			v12 = sub_140642A00(v10, *(_DWORD*)(v11 + 13816));
		v13 = a3 - 1;
		if (!v13)
			return v12;
		if (v13 == 1)
		{
			LOBYTE(v9) = v12 == 0;
			return v9;
		}
	}
	return 0i64;
}
// 14049F922: variable 'v11' is possibly undefined
// 14049F93F: variable 'v12' is possibly undefined
// 140C65C28: using guessed type __int64 qword_140C65C28;

