//----- (0000000140633160) ----------------------------------------------------
int* __fastcall sub_140633160(__int64 a1, __int64 a2)
{
	int* result; // rax
	int* v4; // rbx
	int* v5; // rdi
	void(__fastcall * **v6)(_QWORD); // rcx

	result = sub_14018B280(56i64, 0);
	v4 = result;
	v5 = result + 8;
	if (result != (int*)-32i64)
	{
		sub_14001AF60((__int64)(result + 8), a2);
		v6 = *(void(__fastcall****)(_QWORD))(a2 + 16);
		*((_QWORD*)v5 + 2) = v6;
		if (v6)
			(**v6)(v6);
		return v4;
	}
	return result;
}

