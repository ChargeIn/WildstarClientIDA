//----- (00000001407198E0) ----------------------------------------------------
void __fastcall sub_1407198E0(__int64 a1)
{
	unsigned __int64 v2; // rbx
	__int64 v3; // r14
	int* v4; // rsi
	_QWORD* v5; // rdi
	int v6; // edx
	int v7; // [rsp+20h] [rbp-38h] BYREF
	__int64 v8; // [rsp+28h] [rbp-30h]
	void(__fastcall * v9)(__int64, __int64); // [rsp+30h] [rbp-28h]
	unsigned __int64 v10; // [rsp+38h] [rbp-20h]

	*(_DWORD*)(a1 + 680) = 1;
	v2 = 0i64;
	v3 = a1 + 24;
	v4 = (int*)(a1 + 656);
	v5 = (_QWORD*)(a1 + 536);
	do
	{
		if (*v5)
		{
			v6 = *v4;
			if (*v4 > 0)
			{
				v7 = 1;
				v8 = a1;
				v9 = sub_140719090;
				v10 = v2;
				sub_140195960(v3, v6, (__int64)&v7, 4);
			}
			else
			{
				sub_140719090(a1, v2);
			}
		}
		++v2;
		++v5;
		++v4;
		v3 += 72i64;
	} while (v2 < 6);
	*(_DWORD*)(a1 + 680) = 0;
}

