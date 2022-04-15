//----- (00000001403485A0) ----------------------------------------------------
__int64 __fastcall sub_1403485A0(__int64 a1, __int64 a2, __int64 a3, void(__fastcall*** a4)(_QWORD))
{
	void(__fastcall * ***v7)(_QWORD); // rsi
	__int64 v8; // r15
	int(__fastcall * *v9)(__int64, __int64); // rbx
	void(__fastcall * **v10)(_QWORD); // rcx
	void(__fastcall * **v11)(_QWORD); // rbp
	unsigned int v12; // edx
	__int64 v13; // rax

	if (!a2 || !a4)
		return 2147942487i64;
	*(_QWORD*)(a1 + 72) = 1i64;
	*(_QWORD*)(a1 + 48) = a4;
	*(_QWORD*)(a1 + 64) = 0i64;
	(**a4)(a4);
	sub_14034A2B0(a1 + 8);
	_InterlockedIncrement((volatile signed __int32*)(a1 + 40));
	v7 = (void(__fastcall****)(_QWORD))(a1 + 80);
	*(_QWORD*)(a1 + 88) = a3;
	v8 = 2i64;
	*(_QWORD*)(a1 + 80) = a2;
	v9 = (int(__fastcall**)(__int64, __int64))(a1 + 96);
	do
	{
		v10 = *v7;
		if (*v7)
		{
			(**v10)(v10);
			*v9 = sub_140348710;
			v9[1] = (int(__fastcall*)(__int64, __int64))a1;
			_InterlockedIncrement((volatile signed __int32*)(a1 + 40));
			v11 = *v7;
			if (v9)
			{
				if (*v9)
				{
					sub_140349890(v9, v11 + 14);
					v12 = *((_DWORD*)v11 + 24);
					if (v12 != -2147483638)
						sub_140349B20((__int64*)v11 + 14, v12);
				}
			}
		}
		v9 += 4;
		++v7;
		--v8;
	} while (v8);
	if (_InterlockedDecrement((volatile signed __int32*)(a1 + 40)))
		sub_14034A1A0(a1 + 8, 0);
	if (!*(_QWORD*)(a1 + 168))
	{
		v10 = (void(__fastcall***)(_QWORD))(a1 + 176);
		*(_QWORD*)(a1 + 168) = &qword_140C7AA90;
		*(_QWORD*)(a1 + 176) = qword_140C7AA90;
		qword_140C7AA90 = a1;
		v13 = *(_QWORD*)(a1 + 176);
		if (v13)
			*(_QWORD*)(v13 + 168) = v10;
	}
	sub_14033FA70((__int64)v10, (__int64)sub_140348740, a1);
	return 0i64;
}
// 1403486EF: variable 'v10' is possibly undefined
// 140C7AA90: using guessed type __int64 qword_140C7AA90;

