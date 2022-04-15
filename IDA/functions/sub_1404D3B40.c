//----- (00000001404D3B40) ----------------------------------------------------
__int64 __fastcall sub_1404D3B40(struct _FILETIME a1, int a2, unsigned int a3, unsigned int a4)
{
	__int64 result; // rax
	_QWORD* v8; // r14
	__int64 v9; // rbp
	int* v10; // r8
	unsigned int v11; // edx
	_DWORD v12[10]; // [rsp+20h] [rbp-28h] BYREF
	struct _FILETIME SystemTimeAsFileTime; // [rsp+50h] [rbp+8h] BYREF
	int v14; // [rsp+58h] [rbp+10h] BYREF

	SystemTimeAsFileTime = a1;
	if (a2 >= 10)
		return 0i64;
	v8 = (_QWORD*)(qword_140C65A40 + 8i64 * a2);
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v8 + 24i64))(*v8, a3, a4);
	if ((_DWORD)result)
	{
		v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v8 + 16i64))(*v8, a3, a4);
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		if (*(_QWORD*)&SystemTimeAsFileTime - *(_QWORD*)(v9 + 24) < 0x2FAF080ui64)
			return 0i64;
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		*(struct _FILETIME*)(v9 + 24) = SystemTimeAsFileTime;
		if (a2)
		{
			if (a2 <= 0)
				return 0i64;
			if (a2 > 6)
			{
				if (a2 <= 9)
				{
					v10 = v12;
					v11 = 1946;
					v12[0] = a2;
					v12[1] = a3;
					v12[2] = a4;
				LABEL_14:
					sub_140016010(qword_140C635F0, v11, (__int64)v10);
					return 1i64;
				}
				return 0i64;
			}
			v14 = a2;
		}
		else
		{
			v14 = 0;
		}
		v11 = 1945;
		v10 = &v14;
		goto LABEL_14;
	}
	return result;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65A40: using guessed type __int64 qword_140C65A40;

