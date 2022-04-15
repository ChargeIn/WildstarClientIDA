//----- (000000014049F690) ----------------------------------------------------
__int64 __fastcall sub_14049F690(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
	unsigned int v5; // edi
	unsigned int v7; // r8d
	int v8; // eax
	int v9; // edx
	int v10; // ebx

	v5 = 0;
	v7 = 0;
	if (*(_QWORD*)qword_140C65B80)
	{
		v8 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, a4);
		v9 = 0;
		v7 = 0;
		if ((unsigned int)(v8 - 4) > 3)
			v9 = v8;
		LOBYTE(v7) = v9 == a5;
	}
	v10 = a3 - 1;
	if (!v10)
		return v7;
	if (v10 == 1)
		LOBYTE(v5) = v7 == 0;
	return v5;
}
// 140C65B80: using guessed type __int64 qword_140C65B80;

