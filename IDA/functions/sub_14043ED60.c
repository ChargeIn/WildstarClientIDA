//----- (000000014043ED60) ----------------------------------------------------
__int64 __fastcall sub_14043ED60(__int64 a1, unsigned int a2)
{
	__int64 v2; // r8
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v6; // [rsp+8h] [rbp+8h]

	v2 = *(_QWORD*)(qword_140C65898 + 29024);
	v3 = v2;
	v4 = *(_QWORD*)(v2 + 8);
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v3 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v3 == v2 || (v6 = v3, a2 < *(_DWORD*)(v3 + 32)))
		v6 = *(_QWORD*)(qword_140C65898 + 29024);
	if (v6 == v2)
		return 0i64;
	else
		return *(_QWORD*)(v6 + 40);
}
// 140C65898: using guessed type __int64 qword_140C65898;

