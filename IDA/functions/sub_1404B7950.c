//----- (00000001404B7950) ----------------------------------------------------
void __fastcall sub_1404B7950(__int64 a1, int a2)
{
	_QWORD* v3; // rax
	__int64 v4; // [rsp+20h] [rbp-28h] BYREF
	__int64 v5; // [rsp+28h] [rbp-20h]
	__int64 v6; // [rsp+30h] [rbp-18h]
	__int64 v7; // [rsp+38h] [rbp-10h]

	v3 = (_QWORD*)sub_1405B1510(*(_QWORD**)(qword_140C659F0 + 824));
	if (v3)
	{
		if (a2 < 6)
		{
			v6 = 0i64;
			v4 = 0i64;
			v5 = 0i64;
			v7 = 0i64;
			v4 = v3[1];
			v5 = v3[2];
			v6 = *(_QWORD*)((char*)v3 + 100);
			LODWORD(v7) = a2;
			sub_1403F4900(qword_140C65898, 0x50Eu, (__int64)&v4);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;

