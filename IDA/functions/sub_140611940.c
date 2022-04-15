//----- (0000000140611940) ----------------------------------------------------
void __fastcall sub_140611940(__int64 a1)
{
	unsigned int v1; // edi
	__int64 v3; // rax
	__int64 v4; // rbx
	void(__fastcall * **v5)(_QWORD, __int64); // rcx
	__int64 v6; // rcx

	v1 = 0;
	if (*(_QWORD*)(a1 + 16))
	{
		v3 = 0i64;
		do
		{
			v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8 * v3);
			if (v4)
			{
				v5 = *(void(__fastcall****)(_QWORD, __int64))(v4 + 16);
				if (v5)
					(**v5)(v5, 1i64);
				*(_QWORD*)(v4 + 16) = 0i64;
				sub_14018B900(v4, 0);
			}
			v3 = ++v1;
		} while ((unsigned __int64)v1 < *(_QWORD*)(a1 + 16));
	}
	v6 = *(_QWORD*)(a1 + 8);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
}

