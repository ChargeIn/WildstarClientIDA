//----- (0000000140653660) ----------------------------------------------------
__int64 __fastcall sub_140653660(__int64 a1)
{
	int* v2; // rax
	int v3; // edi
	__int64 v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rdx
	bool v7; // zf
	int v8; // eax
	_DWORD* v9; // rcx
	__int64 result; // rax

	v2 = (int*)sub_1406622C0(a1, 1);
	v3 = 0;
	if (!v2)
		goto LABEL_9;
	v4 = sub_1403D90D0(qword_140C65898, *v2);
	if (!v4)
		goto LABEL_9;
	v5 = *(_QWORD*)(v4 + 5872);
	v6 = v5;
	if (!v5)
		v6 = *(_QWORD*)(v4 + 5880);
	if (!v6)
		goto LABEL_9;
	if (!v5)
		v5 = *(_QWORD*)(v4 + 5880);
	v7 = (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v5 + 264i64))(v5, 0i64, 1i64) == 1;
	v8 = 1;
	if (!v7)
		LABEL_9:
	v8 = 0;
	v9 = *(_DWORD**)(a1 + 16);
	v7 = v8 == 0;
	result = 1i64;
	LOBYTE(v3) = !v7;
	v9[2] = 1;
	*v9 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

