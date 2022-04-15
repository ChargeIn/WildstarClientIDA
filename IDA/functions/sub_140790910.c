//----- (0000000140790910) ----------------------------------------------------
__int64 __fastcall sub_140790910(__int64 a1, int a2, unsigned __int64* a3, __int64 a4)
{
	_QWORD* v5; // rcx
	__int64 result; // rax
	unsigned __int64 v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // rdx
	int v11; // ecx

	if (a2 < *(_DWORD*)(a1 + 24))
	{
		v7 = *(_QWORD*)(a1 + 16i64 * a2 + 40);
		if (v7 == -1i64)
			sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aUnfinishedCapt);
		if (v7 == -2i64)
		{
			v8 = *(_QWORD*)(a1 + 16);
			v9 = a2 + 2i64;
			v10 = *(_QWORD*)(v8 + 16);
			result = 2 * v9;
			v11 = *(_DWORD*)(a1 + 8 * result);
			*(_DWORD*)(v10 + 8) = 3;
			*(double*)v10 = (double)(v11 - *(_DWORD*)a1 + 1);
			*(_QWORD*)(v8 + 16) += 16i64;
		}
		else
		{
			return sub_140058710(*(_QWORD*)(a1 + 16), *(unsigned __int64**)(a1 + 16 * (a2 + 2i64)), v7);
		}
	}
	else
	{
		v5 = *(_QWORD**)(a1 + 16);
		if (a2)
			sub_140056830(v5, (unsigned __int64*)aInvalidCapture_0);
		return sub_140058710((__int64)v5, a3, a4 - (_QWORD)a3);
	}
	return result;
}

