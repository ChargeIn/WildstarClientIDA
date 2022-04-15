//----- (00000001402765B0) ----------------------------------------------------
int __fastcall sub_1402765B0(__int64 a1, int a2)
{
	int result; // eax
	__int64 v4; // rdx
	int v5; // edi
	int v6; // eax
	void* v7; // [rsp+20h] [rbp-38h] BYREF
	int v8; // [rsp+28h] [rbp-30h]
	int v9; // [rsp+2Ch] [rbp-2Ch]
	__int64 v10; // [rsp+30h] [rbp-28h]
	__int64(__fastcall * v11)(__int64); // [rsp+38h] [rbp-20h]
	__int64 v12; // [rsp+40h] [rbp-18h]
	int v13; // [rsp+48h] [rbp-10h]

	*(_DWORD*)(a1 + 6240) = a2;
	result = sub_1401A1120((int**)(a1 + 6816), 0);
	if (result >= 0)
	{
		v7 = &unk_1409E3E74;
		v5 = 0;
		v8 = 2;
		v9 = 2;
		v10 = a1;
		v11 = sub_140279BA0;
		v12 = 0i64;
		v13 = 1;
		result = sub_1401A0EB0((__int64)&v7, v4, (__int64*)(a1 + 6776));
		if (result >= 0)
		{
			result = CoInitialize(0i64);
			if (result >= 0)
			{
				*(_DWORD*)(a1 + 6244) = 1;
				result = sub_140276670(a1);
				if (result >= 0)
				{
					v6 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 40i64))(a1, a1 + 56);
					if (v6 < 0)
						return v6;
					return v5;
				}
			}
		}
	}
	return result;
}
// 140276621: variable 'v4' is possibly undefined

