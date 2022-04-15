//----- (000000014049D3F0) ----------------------------------------------------
__int64 __fastcall sub_14049D3F0(__int64 a1, __int64 a2, int a3, int a4)
{
	__int64 v6; // rcx
	unsigned int v7; // ecx
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // ecx
	int v11; // ebx

	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (v6)
		v7 = *(_DWORD*)(v6 + 220);
	else
		v7 = 23;
	v8 = sub_1401F31E0(v7);
	if (v8)
		v9 = *(_DWORD*)(v8 + 24);
	else
		v9 = 7;
	v10 = 0;
	v11 = a3 - 1;
	if (!v11)
		return v9 == a4;
	if (v11 == 1)
		LOBYTE(v10) = v9 != a4;
	return v10;
}
// 140C65898: using guessed type __int64 qword_140C65898;

