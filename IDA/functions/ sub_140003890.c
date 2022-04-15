//----- (0000000140003890) ----------------------------------------------------
void __fastcall sub_140003890(__int64* a1, unsigned int a2, unsigned __int64 a3, int* a4, int a5, int* a6)
{
	__int64 v9; // rax
	unsigned __int8 v10; // dl
	__int64 v11; // rcx
	int v12; // eax
	int* v13[4]; // [rsp+70h] [rbp-28h] BYREF

	memset(&v13[1], 0, 24);
	v13[0] = a4;
	v9 = sub_1403D90D0(qword_140C65898, a5);
	if (v9)
		v10 = *(_BYTE*)(v9 + 434);
	else
		v10 = 0;
	v11 = *(_QWORD*)(qword_140C65898 + 120);
	v12 = 0;
	if (v11)
		LOBYTE(v12) = a5 == *(_DWORD*)(v11 + 8);
	sub_1404045C0(a1, a2, a3, a5, a6, 0i64, 0, v13, v12, 0, 0, 0, 0, v10);
}
// 140C65898: using guessed type __int64 qword_140C65898;

