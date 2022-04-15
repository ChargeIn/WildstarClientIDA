//----- (0000000140332DD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140332DD0(_QWORD* a1)
{
	unsigned __int64 result; // rax
	_QWORD* v3; // rbx
	LONGLONG v4; // rbp
	unsigned __int64 v5; // rdi
	__int64 v6; // rdi
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // rax
	LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

	result = (unsigned int)(dword_140C636A8 - dword_140C8A618);
	if ((unsigned int)result >= 0x1F4)
	{
		dword_140C8A618 = dword_140C636A8;
		QueryPerformanceCounter(&PerformanceCount);
		result = a1[27];
		v3 = *(_QWORD**)(result + 16);
		v4 = PerformanceCount.QuadPart - ::PerformanceCount.QuadPart;
		if (v3 != (_QWORD*)result)
		{
			do
			{
				v5 = *((unsigned __int16*)v3 + 20);
				if (v5 < a1[22])
				{
					v6 = *(_QWORD*)(a1[21] + 8 * v5);
					if (v6)
					{
						if (*(_DWORD*)(*(_QWORD*)(v6 + 24) + 280i64) == 3 && !*(_DWORD*)(v6 + 32))
						{
							v7 = *(unsigned int*)(v6 + 412);
							if ((*(_DWORD*)(v6 + 416) + 1) % 0x14u == (_DWORD)v7)
							{
								*(_QWORD*)(v6 + 8 * v7 + 168) = v4;
								v8 = *(unsigned int*)(v6 + 16);
								LOBYTE(PerformanceCount.LowPart) = *(_BYTE*)(v6 + 412);
								*(_QWORD*)(v6 + 160) = v4;
								(*(void(__fastcall**)(_QWORD*, __int64, _QWORD, LARGE_INTEGER*))(*a1 + 240i64))(
									a1,
									v8,
									0i64,
									&PerformanceCount);
								*(_DWORD*)(v6 + 412) = (*(_DWORD*)(v6 + 412) + 1) % 0x14u;
							}
						}
					}
				}
				v9 = v3[3];
				if (v9)
				{
					v3 = (_QWORD*)v3[3];
					for (result = *(_QWORD*)(v9 + 16); result; result = *(_QWORD*)(result + 16))
						v3 = (_QWORD*)result;
				}
				else
				{
					for (result = v3[1]; v3 == *(_QWORD**)(result + 24); result = *(_QWORD*)(result + 8))
						v3 = (_QWORD*)result;
					if (v3[3] != result)
						v3 = (_QWORD*)result;
				}
			} while (v3 != (_QWORD*)a1[27]);
		}
	}
	return result;
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C8A618: using guessed type int dword_140C8A618;

