//----- (0000000140712D90) ----------------------------------------------------
int* __fastcall sub_140712D90(__int64 a1)
{
	_DWORD* v2; // rax
	unsigned int v3; // edi
	int* v4; // rax
	int* v5; // rax
	unsigned __int64 v6; // r8

	v2 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 88i64))(a1);
	v3 = (v2[2] - *v2) * (v2[3] - v2[1]);
	sub_14018B900(*(_QWORD*)(a1 + 64), 0);
	v4 = sub_14018B280(v3, 0);
	*(_QWORD*)(a1 + 64) = v4;
	sub_1407E4830(v4, 0i64, v3);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	*(_DWORD*)(a1 + 60) = v3 >> 3;
	if ((v3 & 7) != 0)
		*(_DWORD*)(a1 + 60) = (v3 >> 3) + 1;
	v5 = sub_14018B280(*(unsigned int*)(a1 + 60), 0);
	v6 = *(unsigned int*)(a1 + 60);
	*(_QWORD*)(a1 + 72) = v5;
	return sub_1407E4830(v5, 0i64, v6);
}

