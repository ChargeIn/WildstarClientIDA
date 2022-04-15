//----- (00000001405A9660) ----------------------------------------------------
void __fastcall sub_1405A9660(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // rax
	_QWORD* v5; // rsi
	__int64 v6; // rbx
	void(__fastcall * **v7)(_QWORD, __int64); // rcx

	if (a2)
	{
		v2 = a2;
		do
		{
			sub_1405A9660(a1, v2[3]);
			v4 = v2[5];
			v5 = (_QWORD*)v2[2];
			if (v4)
			{
				v6 = 0i64;
				if (*(_DWORD*)(v4 + 16))
				{
					do
					{
						v7 = (void(__fastcall***)(_QWORD, __int64))v2[v6 + 7];
						if (v7)
							(**v7)(v7, 1i64);
						v6 = (unsigned int)(v6 + 1);
					} while ((unsigned int)v6 < *(_DWORD*)(v2[5] + 16i64));
				}
			}
			sub_14018B900((__int64)v2, 0);
			v2 = v5;
		} while (v5);
	}
}

