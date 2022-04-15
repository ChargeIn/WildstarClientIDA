//----- (000000014063CE40) ----------------------------------------------------
void sub_14063CE40()
{
	__int64 v0; // rdx
	__int64 v1; // [rsp+20h] [rbp-18h] BYREF
	__int64 v2; // [rsp+28h] [rbp-10h]

	v0 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v0)
	{
		v1 = 0i64;
		v2 = 0i64;
		v1 = *(_QWORD*)(v0 + 72);
		v2 = *(_DWORD*)(v0 + 8) | 2u;
		sub_1403F4740(qword_140C65898, 0x406u, (__int64)&v1);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

