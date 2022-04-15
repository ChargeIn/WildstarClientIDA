//----- (00000001402CE5D0) ----------------------------------------------------
__int64 __fastcall sub_1402CE5D0(__int64* a1, __int64 a2)
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
		v3 = sub_14018B280(416 * a2 + 16, 0);
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
				*(_QWORD*)v8 = off_140B62AD0;
				*(_QWORD*)(v8 + 240) = 0i64;
				*(_QWORD*)(v8 + 248) = 0i64;
				*(_QWORD*)(v8 + 256) = 0i64;
				*(_QWORD*)(v8 + 272) = 0i64;
				*(_QWORD*)(v8 + 280) = 0i64;
				*(_QWORD*)(v8 + 288) = 0i64;
				*(_QWORD*)(v8 + 304) = 0i64;
				*(_QWORD*)(v8 + 312) = 0i64;
				*(_QWORD*)(v8 + 320) = 0i64;
				*(_QWORD*)(v8 + 328) = 0i64;
				*(_QWORD*)(v8 + 344) = 0i64;
				*(_DWORD*)(v8 + 352) = 0;
				*(_QWORD*)(v8 + 368) = 0i64;
				*(_QWORD*)(v8 + 376) = 0i64;
				*(_QWORD*)(v8 + 384) = 0i64;
				*(_QWORD*)(v8 + 392) = 0i64;
				*(_QWORD*)(v8 + 400) = 0i64;
				*(_QWORD*)(v8 + 336) = 0i64;
				*(_DWORD*)(v8 + 48) = 0;
			}
			++v6;
			v7 += 416i64;
		} while (v6 < a1[1]);
	}
	return result;
}
// 140B5F110: using guessed type __int64 (__fastcall *off_140B5F110)();
// 140B62AD0: using guessed type __int64 (__fastcall *off_140B62AD0[8])();

