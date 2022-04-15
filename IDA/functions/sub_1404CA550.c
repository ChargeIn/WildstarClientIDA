//----- (00000001404CA550) ----------------------------------------------------
void __fastcall sub_1404CA550(__int64 a1, __int64 a2)
{
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // [rsp+30h] [rbp+8h]

	v2 = *(_DWORD*)(a2 + 8);
	v3 = *(_QWORD*)(qword_140C659F8 + 264);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(qword_140C659F8 + 264);
	if (v6 != v3)
		sub_1404C07B0(*(_QWORD*)(v6 + 40), a2);
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

