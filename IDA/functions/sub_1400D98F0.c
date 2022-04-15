//----- (00000001400D98F0) ----------------------------------------------------
__int64 __fastcall sub_1400D98F0(_QWORD* a1)
{
	__int64 v2; // rdi
	void(__fastcall * **v3)(_QWORD); // rsi
	__int64 v4; // rbx
	int* v5; // rcx

	v2 = sub_1400D66A0(a1, 1u);
	if (v2)
	{
		v3 = (void(__fastcall***)(_QWORD))sub_1400D66A0(a1, 2u);
		if (v3)
		{
			v4 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 136i64);
			v5 = sub_14018B280(32i64, 0);
			if (v5 != (int*)-16i64)
			{
				*((_QWORD*)v5 + 2) = v2;
				*((_QWORD*)v5 + 3) = v3;
			}
			*(_QWORD*)v5 = v4;
			*((_QWORD*)v5 + 1) = *(_QWORD*)(v4 + 8);
			**(_QWORD**)(v4 + 8) = v5;
			*(_QWORD*)(v4 + 8) = v5;
			(**(void(__fastcall***)(__int64))v2)(v2);
			(**v3)(v3);
		}
	}
	return 0i64;
}

