//----- (00000001402CE760) ----------------------------------------------------
__int64 __fastcall sub_1402CE760(__int64* a1, __int64 a2)
{
	int* v3; // rax
	__int64 result; // rax
	bool v5; // zf
	unsigned __int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rcx

	a1[1] = a2;
	if (a2)
	{
		v3 = sub_14018B280(384 * a2 + 16, 0);
		if (v3)
		{
			result = (__int64)(v3 + 4);
			*(_QWORD*)(result - 16) = &off_140B5F110;
		}
		else
		{
			result = 16i64;
		}
	}
	else
	{
		result = 0i64;
	}
	v5 = a1[1] == 0;
	*a1 = result;
	v6 = 0i64;
	if (!v5)
	{
		v7 = 0i64;
		do
		{
			v8 = v7 + *a1;
			if (v8)
			{
				*(_QWORD*)v8 = off_140B62BE0;
				*(_QWORD*)(v8 + 36) = 0i64;
				*(_QWORD*)(v8 + 88) = 0i64;
				*(_QWORD*)(v8 + 96) = 0i64;
				*(_QWORD*)(v8 + 336) = 0i64;
				*(_QWORD*)(v8 + 344) = 0i64;
				*(_QWORD*)(v8 + 312) = 3i64;
				*(_DWORD*)(v8 + 320) = 0;
				*(_QWORD*)(v8 + 328) = 0i64;
				*(_QWORD*)(v8 + 304) = &off_140B62AC0;
				*(_QWORD*)(v8 + 352) = 0i64;
				*(_QWORD*)(v8 + 360) = 0i64;
				*(_QWORD*)(v8 + 368) = 0i64;
				*(_QWORD*)(v8 + 376) = 0i64;
			}
			++v6;
			v7 += 384i64;
		} while (v6 < a1[1]);
	}
	return result;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140B62AC0: using guessed type __int64 (__fastcall *off_140B62AC0)();
// 140B62BE0: using guessed type __int64 (__fastcall *off_140B62BE0[25])();

