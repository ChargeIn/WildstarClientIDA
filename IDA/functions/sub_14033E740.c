//----- (000000014033E740) ----------------------------------------------------
int* __fastcall sub_14033E740(__int64 a1, void(__fastcall**** a2)(_QWORD))
{
	int* v3; // rbx
	void(__fastcall * **v4)(_QWORD); // rcx

	v3 = sub_14018B280(40i64, 0);
	if (v3 != (int*)-32i64)
	{
		v4 = *a2;
		*((_QWORD*)v3 + 4) = *a2;
		if (v4)
			(**v4)(v4);
	}
	return v3;
}

