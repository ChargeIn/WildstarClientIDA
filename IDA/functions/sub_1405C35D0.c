//----- (00000001405C35D0) ----------------------------------------------------
void __fastcall sub_1405C35D0(__int64 a1, int a2)
{
	__int64 v3; // rdx
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // [rsp+30h] [rbp+8h]
	int v7; // [rsp+38h] [rbp+10h] BYREF

	v3 = *(_QWORD*)(qword_140C65B98 + 72);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v6 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v6 = *(_QWORD*)(qword_140C65B98 + 72);
	if (v3 != v6 && !*(_DWORD*)(v6 + 60) && !(unsigned int)sub_1405BED30(qword_140C65B98, a2))
	{
		v7 = a2;
		sub_1403F4900(qword_140C65898, 0x5B5u, (__int64)&v7);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

