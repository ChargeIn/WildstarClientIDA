//----- (000000014049FC70) ----------------------------------------------------
__int64 __fastcall sub_14049FC70(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5)
{
	int v7; // eax
	int v8; // eax
	unsigned int v9; // edi
	unsigned int v10; // edx
	__int64 v11; // rcx
	__int64 v12; // r10
	unsigned int v13; // r11d
	int v14; // ebx

	if (!qword_140C65948)
		return 0i64;
	v7 = *(_DWORD*)(a2 + 128);
	if (v7 == 20 || v7 == 23)
	{
		if (!a5)
			return a3 == 2;
		v8 = *(_DWORD*)(a5 + 128);
		if (v8 == 20 || v8 == 23)
			return a3 == 2;
	}
	v9 = 0;
	if ((unsigned int)sub_14048D530(a1, a4))
		v9 = sub_14048D610(v11, v10, *(_DWORD*)(v12 + 13816));
	v14 = a3 - 1;
	if (v14)
	{
		if (v14 == 1)
		{
			LOBYTE(v13) = v9 == 0;
			return v13;
		}
	}
	else
	{
		return v9;
	}
	return v13;
}
// 14049FCE3: variable 'v11' is possibly undefined
// 14049FCE3: variable 'v10' is possibly undefined
// 14049FCDC: variable 'v12' is possibly undefined
// 14049FCFD: variable 'v13' is possibly undefined
// 140C65948: using guessed type __int64 qword_140C65948;

