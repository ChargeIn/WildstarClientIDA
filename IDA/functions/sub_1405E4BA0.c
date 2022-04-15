//----- (00000001405E4BA0) ----------------------------------------------------
__int64 __fastcall sub_1405E4BA0(__int64 a1)
{
	int** v2; // rsi
	unsigned int i; // edi
	int* v4; // rbx
	unsigned int v5; // ebx
	_QWORD* v6; // rdi
	__int64 result; // rax
	__int64 v8; // r8

	v2 = (int**)(a1 + 16);
	for (i = 0; i < 0x42; ++i)
	{
		v4 = sub_14018B280(32i64, 0);
		if (v4)
		{
			*v4 = sub_14079E860(i);
			*((_QWORD*)v4 + 3) = 0i64;
			*((_QWORD*)v4 + 2) = 0i64;
			if (*v4 == 3)
			{
				*(_QWORD*)(v4 + 1) = 1065353216i64;
			}
			else
			{
				v4[2] = 0;
				v4[1] = 0;
			}
			sub_14079E900((__int64*)v4 + 2);
		}
		else
		{
			v4 = 0i64;
		}
		*v2++ = v4;
	}
	v5 = 0;
	v6 = (_QWORD*)(a1 + 552);
	do
	{
		result = (__int64)sub_14018B280(32i64, 0);
		if (result)
		{
			result = sub_14079E860(v5);
			*(_DWORD*)v8 = result;
			*(_QWORD*)(v8 + 24) = 0i64;
			*(_QWORD*)(v8 + 16) = 0i64;
			if (*(_DWORD*)v8 == 3)
			{
				*(_QWORD*)(v8 + 4) = 1065353216i64;
			}
			else
			{
				*(_DWORD*)(v8 + 8) = 0;
				*(_DWORD*)(v8 + 4) = 0;
			}
			*(_QWORD*)(v8 + 24) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		++v5;
		*v6++ = v8;
	} while (v5 < 0x42);
	return result;
}
// 1405E4C59: variable 'v8' is possibly undefined

