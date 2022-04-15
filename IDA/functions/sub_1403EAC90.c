//----- (00000001403EAC90) ----------------------------------------------------
void sub_1403EAC90()
{
	__int64 v0; // rbx
	int v1; // [rsp+20h] [rbp-28h] BYREF
	__int64 v2; // [rsp+28h] [rbp-20h]
	void(__fastcall * v3)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v4; // [rsp+38h] [rbp-10h]

	v0 = qword_140C65898;
	if (dword_140DC2924)
	{
		v1 = 0;
		v2 = sub_14001C280(qword_140C65898);
		v4 = 0i64;
		v3 = sub_1403EAD10;
		sub_140195960(v0 + 29552, dword_140DC2924, (__int64)&v1, 4);
	}
	else
	{
		sub_140195D70(qword_140C65898 + 29552);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC2924: using guessed type int dword_140DC2924;

