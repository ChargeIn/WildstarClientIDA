//----- (000000014049F460) ----------------------------------------------------
__int64 __fastcall sub_14049F460(__int64 a1, __int64 a2, int a3, int a4, unsigned int a5)
{
	unsigned int v5; // edi
	unsigned int v7; // esi
	__int64 v8; // rax
	int v9; // ebx

	v5 = 0;
	v7 = 0;
	v8 = sub_1405A8A40(a1, a4);
	if (v8)
		v7 = sub_1405510D0(v8, a5);
	v9 = a3 - 1;
	if (!v9)
		return v7;
	if (v9 == 1)
		LOBYTE(v5) = v7 == 0;
	return v5;
}

