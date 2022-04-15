//----- (000000014085D4B0) ----------------------------------------------------
void __fastcall sub_14085D4B0(__int64 a1, float a2, __int64 a3)
{
	float v3; // xmm6_4
	float v4; // xmm7_4
	float v7; // xmm9_4
	__int64 v8; // rax
	unsigned __int8 v9; // cl
	__int64 v10; // rdx
	float v11; // xmm0_4
	__int64 v12; // rcx
	__int64 v13; // rcx

	v3 = *(float*)(a1 + 396);
	v4 = 0.0;
	v7 = *(float*)(a1 + 400);
	if (v7 != 0.0)
	{
		if (!*(_QWORD*)(a3 + 72))
			*(_QWORD*)(a3 + 72) = sub_14083EDE0((LPCRITICAL_SECTION)((char*)qword_140C61BA8 + 9552), *(_DWORD*)(a3 + 4));
		v8 = *(_QWORD*)(a3 + 72);
		if (v8)
		{
			v9 = *(_BYTE*)(v8 + 128);
			if (v9 != 0xFF)
			{
				v10 = v8 + 16 * (v9 + 3i64);
				if (v10)
				{
					v11 = *(float*)(*(_QWORD*)v10 + 12i64 * (unsigned int)(*(_DWORD*)(v10 + 8) - 1));
					if (a2 >= v11 || v11 <= 0.0)
						v3 = v3 + v7;
					else
						v3 = v3 + (float)((float)(a2 / v11) * v7);
				}
			}
		}
		if (v3 < 0.0 || (v4 = v3, v3 <= 100.0))
			v3 = v4;
		else
			v3 = 100.0;
	}
	if (v3 != *(float*)(a1 + 388))
	{
		v12 = *(_QWORD*)(a1 + 520);
		if (v12)
			sub_140855480(v12, v3, a1);
		v13 = *(_QWORD*)(a1 + 528);
		if (v13)
			sub_140855480(v13, v3, a1);
		sub_140855480((__int64)&unk_140C10F30, v3, a1);
		*(float*)(a1 + 388) = v3;
	}
}

