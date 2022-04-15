//----- (00000001400E4D60) ----------------------------------------------------
void __fastcall sub_1400E4D60(__int64 a1, float a2)
{
	float v2; // xmm6_4
	unsigned int v4; // edi
	__int64 v5; // rcx
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // [rsp+70h] [rbp+8h]

	v2 = a2;
	if (a2 < 0.1)
		v2 = 0.1;
	v4 = 0;
	if (*(_QWORD*)(a1 + 2784))
	{
		v5 = 0i64;
		do
		{
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 2776) + 8 * v5);
			if (v2 != *(float*)(v6 + 88)
				&& (*(int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65680 + 32i64))(
					qword_140C65680,
					*(_QWORD*)(v6 + 24),
					(unsigned int)(int)(float)((float)((float)*(int*)(v6 + 80) * v2) + 0.5)) >= 0)
			{
				v7 = *(_QWORD*)(v6 + 96);
				if (v7)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
					*(_QWORD*)(v6 + 96) = 0i64;
				}
				*(_QWORD*)(v6 + 96) = v8;
				*(float*)(v6 + 88) = v2;
				*(_DWORD*)(v6 + 92) = *(_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 32i64))(v8);
			}
			v5 = ++v4;
		} while ((unsigned __int64)v4 < *(_QWORD*)(a1 + 2784));
	}
}
// 140C65680: using guessed type __int64 qword_140C65680;

