//----- (00000001405E39E0) ----------------------------------------------------
void __fastcall sub_1405E39E0(__int64 a1)
{
	__int16* v2; // rax
	__int64 v3; // rcx
	int v4; // eax
	__int16* v5; // rax
	int v6; // [rsp+30h] [rbp+8h] BYREF

	v2 = sub_14034BDD0(a1, 326782);
	if ((unsigned int)sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v2))
	{
		v5 = sub_14034BDD0(v3, 326781);
		v4 = sub_14018E2C0(*(_QWORD*)(a1 + 8), (unsigned __int16*)v5);
		if (v4)
			v4 = (*(_DWORD*)(qword_140C65898 + 25384) & 2) == 0;
	}
	else
	{
		v4 = 1;
	}
	v6 = v4;
	sub_1403F4900(qword_140C65898, 0xB8u, (__int64)&v6);
}
// 1405E3A0F: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

