//----- (0000000140764970) ----------------------------------------------------
_QWORD* __fastcall sub_140764970(__int64 a1, __int64* a2, int a3)
{
	_QWORD* result; // rax
	_QWORD* v6; // rbx
	__int64 v8[4]; // [rsp+20h] [rbp-48h] BYREF
	_QWORD* v9; // [rsp+40h] [rbp-28h]
	__int64 v10; // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]
	__int64 v12; // [rsp+58h] [rbp-10h]

	result = *(_QWORD**)(a1 + 8);
	v6 = (_QWORD*)*result;
	if ((_QWORD*)*result != result)
	{
		do
		{
			v9 = 0i64;
			memset(v8, 0, sizeof(v8));
			v10 = 0i64;
			v11 = 0i64;
			v12 = 0i64;
			result = (_QWORD*)v6[2];
			v9 = result;
			if (result)
			{
				result = (_QWORD*)sub_140764640((__int64)v8, a3);
				if ((_DWORD)result)
					result = (_QWORD*)sub_140765F30(a2, (__int64)v8);
			}
			v6 = (_QWORD*)*v6;
		} while (v6 != *(_QWORD**)(a1 + 8));
	}
	return result;
}

