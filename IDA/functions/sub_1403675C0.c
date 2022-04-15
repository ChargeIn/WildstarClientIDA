//----- (00000001403675C0) ----------------------------------------------------
int* __fastcall sub_1403675C0(_QWORD* a1, __int64 a2)
{
	int* result; // rax
	_QWORD** v5; // rsi
	int v6; // r15d
	void(__fastcall * v7)(_QWORD, _QWORD, _QWORD); // rax
	void(__fastcall * v8)(_QWORD**, __int64, _QWORD); // rax
	void(__fastcall * v9)(__int64, __int64, _QWORD); // rax
	_QWORD** v10; // rsi
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	_QWORD** v12; // [rsp+28h] [rbp-20h]

	result = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 328i64))(a2);
	if (result)
	{
		if (a2 == *(_QWORD*)(a2 + 32))
		{
			result = (int*)a1[651];
			if (result)
				result = (int*)((__int64(__fastcall*)(__int64, _QWORD, _QWORD))result)(a2, 0i64, a1[652]);
		}
	}
	if (*(_QWORD*)(a2 + 88))
	{
		result = (int*)sub_14036FD60((__int64)(a1 + 642), a2 + 88, &v11);
		if ((_DWORD)result)
		{
			v5 = v12;
			if (v12 != (_QWORD**)a2)
			{
				v6 = v11;
				if (v12)
				{
					v7 = (void(__fastcall*)(_QWORD, _QWORD, _QWORD))a1[647];
					if (v7)
					{
						v7((unsigned int)v11, 0i64, a1[648]);
						sub_1403790A0(v5);
					}
					v8 = (void(__fastcall*)(_QWORD**, __int64, _QWORD))a1[651];
					if (v8)
						v8(v5, 3i64, a1[652]);
					if (a1[647])
						sub_1403791A0((__int64)v5);
				}
				*(_DWORD*)(a2 + 104) = v6;
				v12 = (_QWORD**)a2;
				sub_14036FE00((__int64)(a1 + 642), a2 + 88, &v11);
				v9 = (void(__fastcall*)(__int64, __int64, _QWORD))a1[651];
				v10 = v12;
				if (v9)
				{
					v9(a2, 2i64, a1[652]);
					sub_1403790A0(v10);
				}
				result = (int*)a1[647];
				if (result)
					result = (int*)((__int64(__fastcall*)(_QWORD, __int64, _QWORD))result)((unsigned int)v11, a2, a1[648]);
				if (a1[651])
					return (int*)sub_1403791A0((__int64)v10);
			}
		}
		else
		{
			v12 = (_QWORD**)a2;
			LODWORD(v11) = 0;
			return sub_14036FCB0((__int64)(a1 + 642), a2 + 88, &v11);
		}
	}
	return result;
}

