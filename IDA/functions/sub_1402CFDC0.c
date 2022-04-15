#include "../winhttp.h"

//----- (00000001402CFDC0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402CFDC0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // rsi
	void(__fastcall * **v7)(_QWORD); // rax
	void(__fastcall * **v8)(_QWORD); // rsi
	__int64 v9; // rcx
	_DWORD* v10; // rcx
	unsigned __int64 result; // rax
	__int64 v12; // rsi
	__int64 v13; // rax
	bool v14; // cf
	__int64 v15; // rax
	int v16; // ecx
	unsigned __int64 v17; // rdx

	v5 = (*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64;
	if (a3 < v5)
	{
		result = sub_1402CFC90(a1, a2, a3);
		goto LABEL_27;
	}
	v6 = 0i64;
	if (v5)
	{
		do
			sub_1402CFC90(a1, a2, v6++);
		while (v6 < (*(_QWORD*)(a1 + 312) - *(_QWORD*)(a1 + 304)) / 192i64);
	}
	v7 = (void(__fastcall***)(_QWORD))sub_1402D3690(*(_QWORD*)(a1 + 24), a2);
	v8 = v7;
	if (*(void(__fastcall****)(_QWORD))(a1 + 328) != v7)
	{
		if (v7)
			(**v7)(v7);
		v9 = *(_QWORD*)(a1 + 328);
		if (v9)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		*(_QWORD*)(a1 + 328) = v8;
	}
	v10 = *(_DWORD**)(a1 + 336);
	if (v10)
	{
		if (*(v10 - 2))
			(**(void(__fastcall***)(_DWORD*, __int64))v10)(v10, 3i64);
		else
			sub_14018B900((__int64)(v10 - 2), 0);
	}
	result = *(_QWORD*)(a1 + 328);
	if (!result)
		goto LABEL_24;
	v12 = (*(_QWORD*)(result + 120) - *(_QWORD*)(result + 112)) / 28i64;
	v13 = v12 << 6;
	if (!is_mul_ok(v12, 0x40ui64))
		v13 = -1i64;
	v14 = __CFADD__(v13, 8i64);
	v15 = v13 + 8;
	if (v14)
		v15 = -1i64;
	result = (unsigned __int64)sub_14018B280(v15, 0);
	if (!result)
	{
	LABEL_24:
		v17 = 0i64;
		goto LABEL_25;
	}
	v16 = v12 - 1;
	*(_DWORD*)result = v12;
	v17 = result + 8;
	if ((int)v12 - 1 < 0)
	{
	LABEL_25:
		*(_QWORD*)(a1 + 336) = v17;
		goto LABEL_27;
	}
	result += 40i64;
	do
	{
		--v16;
		*(_QWORD*)result = 0i64;
		*(_QWORD*)(result + 8) = 0i64;
		*(_QWORD*)(result - 24) = 3i64;
		*(_DWORD*)(result - 16) = 0;
		*(_QWORD*)(result - 8) = 0i64;
		*(_QWORD*)(result - 32) = off_140B62AB8;
		*(_QWORD*)(result + 16) = 0i64;
		*(_QWORD*)(result + 24) = 0i64;
		result += 64i64;
	} while (v16 >= 0);
	*(_QWORD*)(a1 + 336) = v17;
LABEL_27:
	*(_DWORD*)(a1 + 228) = 0;
	return result;
}
// 140B62AB8: using guessed type __int64 (__fastcall *off_140B62AB8[2])();

