//----- (0000000140129F70) ----------------------------------------------------
__int64 __fastcall sub_140129F70(__int64 a1, const __m128i* a2)
{
	int* v3; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	signed int v7; // eax
	unsigned int v8; // ebx
	int v10[2]; // [rsp+30h] [rbp-38h] BYREF
	__int64 v11; // [rsp+38h] [rbp-30h]
	void(__fastcall * v12)(__int64); // [rsp+40h] [rbp-28h]
	__int64 v13; // [rsp+48h] [rbp-20h]
	int v14; // [rsp+50h] [rbp-18h]
	void(__fastcall * **v15)(_QWORD); // [rsp+70h] [rbp+8h] BYREF

	v3 = (int*)&unk_1409D833C;
	if (a2)
		v3 = (int*)a2;
	v5 = 0i64;
	if (*(_WORD*)v3)
	{
		do
			++v5;
		while (*((_WORD*)v3 + v5));
	}
	sub_14001C480(a1 + 712, v3, (int*)((char*)v3 + 2 * v5));
	v15 = 0i64;
	v7 = sub_1401B6DE0(v6, a2, (int**)(a1 + 752), (__int64)&v15, 0i64);
	if (v7 < 0)
		goto LABEL_7;
	v12 = sub_14012A120;
	v10[0] = 12;
	v10[1] = 1;
	v11 = a1;
	v13 = 0i64;
	v14 = 1;
	v7 = sub_14019DCA0((__int64)v10, 0, v15, (int**)(a1 + 768));
	v8 = v7;
	if (v7 < 0)
		LABEL_7:
	v8 = sub_14012A060(a1, v7);
	if (v15)
		(*v15)[1](v15);
	return v8;
}
// 140129FD0: variable 'v6' is possibly undefined

