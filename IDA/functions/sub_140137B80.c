#include "../winhttp.h"

//----- (0000000140137B80) ----------------------------------------------------
void __fastcall sub_140137B80(__int64 a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	LARGE_INTEGER* v4; // rdx

	if (*(_QWORD*)(a1 + 8))
	{
		if (((*(_DWORD*)(a1 + 536) - 3) & 0xFFFFFFFD) != 0)
		{
			v2 = *(_QWORD**)(a1 + 456);
			v3 = (_QWORD*)*v2;
			if ((_QWORD*)*v2 != v2)
			{
				do
				{
					v4 = (LARGE_INTEGER*)v3[2];
					if (v4->QuadPart)
					{
						if (v4[22].QuadPart != v4[21].QuadPart)
							sub_1400F3010(v4->QuadPart + 384, v4[1], v4[7].LowPart, v4[21].QuadPart, &unk_1409D053B);
					}
					v3 = (_QWORD*)*v3;
				} while (v3 != *(_QWORD**)(a1 + 456));
			}
		}
	}
}

