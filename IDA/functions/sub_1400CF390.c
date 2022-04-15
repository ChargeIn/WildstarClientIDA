//----- (00000001400CF390) ----------------------------------------------------
void __fastcall sub_1400CF390(__int64 a1, float* a2, unsigned __int8 a3)
{
	__int64 v5; // rbx
	__int64 v6; // rdi
	__int64 v7; // rcx
	int v8; // [rsp+40h] [rbp+18h] BYREF

	v5 = *(_QWORD*)(a1 + 8i64 * a3 + 320);
	if (a3 == 2)
	{
		if (!v5)
			return;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65680 + 136i64))(qword_140C65680);
	}
	if (v5)
	{
		do
		{
			v6 = *(_QWORD*)(v5 + 208);
			if (*(_BYTE*)v5)
			{
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
				sub_1401502E0(v5, a2);
			}
			else
			{
				v7 = *(_QWORD*)(a1 + 344);
				if (v7)
				{
					v8 = *(_DWORD*)(v5 + 4);
					sub_1400E0890(v7, &v8);
				}
				sub_140150220(v5);
				sub_14018B900(v5, 0);
			}
			v5 = v6;
		} while (v6);
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;

